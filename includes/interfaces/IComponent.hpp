#pragma once

// Defines
# define COLOR_HEADER_CXX

namespace GE::Core {

	/**
	 * @brief The IComponent interface defines the basic structure for all classes	
	 * It provides a way to initialize, update, and render components.
	 */
	class IComponent {
		public:
			virtual ~IComponent() = default;

			/**
			 * @brief Initializes the component.
			 */
			virtual void init() = 0;

			/**
			 * @brief Updates the component.
			 */
			virtual void update() = 0;

			/**
			 * @brief Renders the component.
			 */
			virtual void render() = 0;
	};

} // namespace GE::Core